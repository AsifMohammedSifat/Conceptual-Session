from typing import Any
from django.db.models.query import QuerySet
from django.shortcuts import render,redirect,get_object_or_404
from book.forms import BookStoreForm
from book.models import BookStoreModel
from django.urls import reverse_lazy
from django.http import HttpResponseForbidden
from django.views.generic import TemplateView,DetailView,ListView,CreateView,UpdateView,DeleteView
from django.views.generic.edit import FormView
# Create your views here.
#=========================|Show Home - Template View|=======================================
# function based view
# def home(request):
#     return render(request, 'home.html')

class HomeTemplateView(TemplateView):
    template_name = 'home.html'

    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        context = {'name':'asif','roll':25,'age':25}
        print(context)
        context.update({'school':'abc'})
        print(context)
        print(kwargs)
        return context
#=========================|Show Book - List View|=======================================  
def show_books(request):
    book = BookStoreModel.objects.all()
    return render(request, 'show_book.html', {'booklist': book})

class ShowBooksView(ListView):
    model = BookStoreModel
    template_name = 'show_book.html'
    context_object_name = 'booklist'
    ordering = ['-id']

    # def get_context_data(self, **kwargs):
    #     context = super().get_context_data(**kwargs)
    #     context['booklist'] = BookStoreModel.objects.all().order_by('-id')
    #     # context['booklist'] = BookStoreModel.objects.filter(pk='3')
    #     context['extra_data'] = {'type': 'Show Book'}
    #     context['name'] = 'asif'
    #     return context
        
    # def get_queryset(self):
    #     return BookStoreModel.objects.filter(pk='3')

    # def get_template_names(self):
    #     if self.request.user.is_superuser:
    #         template_name = 'superuser.html'
    #     elif self.request.user.is_staff:
    #         template_name = ''
    #     else:
    #         template_name = self.template_name
    #     return [template_name]

#=========================|Detail Book - List View|======================================= 
    
def detail_books(request,id):
    book = BookStoreModel.objects.get(pk=id)
    return render(request, 'book_details.html', {'item': book})

class BookDetailsView(DetailView):
    model = BookStoreModel
    template_name = 'book_details.html'
    pk_url_kwarg = 'id'
    context_object_name = 'item'
    
#=========================|Form Book - Form View + CreateView|================================== 
def store_book(request):
    if request.method == 'POST':
        book = BookStoreForm(request.POST)
        if book.is_valid():
            book.save()
            print(book.cleaned_data)
            return redirect('show_books')
    else:
        book = BookStoreForm()
    return render(request, 'store_book.html', {'form':book})

# class StoreBookView(FormView):
#     model = BookStoreModel
#     form_class = BookStoreForm
#     template_name = 'store_book.html'
#     # success_url = reverse_lazy('show_books')

#     def form_valid(self, form):
#         print(form.cleaned_data)
#         form.save()
#         return redirect('show_books')
class StoreBookView(CreateView):
    model = BookStoreModel
    form_class = BookStoreForm
    template_name = 'store_book.html'
    success_url = reverse_lazy('show_books')

#=========================|Edit Book - List View|======================================= 

def edit_book(request, id):
    book = BookStoreModel.objects.get(pk=id)
    form = BookStoreForm(instance = book)
    if request.method == 'POST':
        form = BookStoreForm(request.POST, instance = book)
        if form.is_valid():
            form.save()
            return redirect('show_books')
    return render(request, 'store_book.html', {'form':form})

class BookUpdateView(UpdateView):
    model = BookStoreModel
    template_name = 'store_book.html'
    form_class = BookStoreForm
    success_url = reverse_lazy('show_books')
    # pk_url_kwarg = 'id'



def delete_book(request, id):
    book = BookStoreModel.objects.get(pk = id).delete()
    return redirect('show_books')
    
class DeleteBookView(DeleteView):
    model = BookStoreModel
    template_name = 'delete_confirmation.html'
    success_url = reverse_lazy('show_books')
    pk_url_kwarg = 'id'
    
    
#=========================|Edit Book - List View|======================================= 

    
    

    