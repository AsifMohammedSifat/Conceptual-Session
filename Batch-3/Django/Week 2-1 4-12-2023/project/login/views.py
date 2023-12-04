from django.shortcuts import render
from .  import django_form
# Create your views here.

def loginHome(request):
    if request.method=='POST':
        print(request.POST,request.FILES)
        name = request.POST.get('name')
        email = request.POST.get('email')
        uploaded_file = request.FILES['file']
        img = uploaded_file.name
        
        form = django_form.loginForm(request.POST,request.FILES)
        if form.is_valid():
          file = form.cleaned_data['file']
          print(file.name)
          with open('login/static/upload/'+file.name,'wb+') as destination:
               for chunck in file.chunks():
                    destination.write(chunck)
        return render(request,'login_home.html',{'name':name,'email':email,'img':img})
    else:
         return render(request,'login_home.html')

def loginForm(request):
        return render(request,'login_form.html')

def djangoForm(request):
        # form = django_form.loginForm(request.POST)
        # if form.is_valid():
        #     print(form.cleaned_data)
        # return render(request,'django_form.html',{'form':form})
        if request.method=='POST':
              form = django_form.loginForm(request.POST,request.FILES)
              if form.is_valid():
                file = form.cleaned_data['file']
                print(file.name)
                with open('login/static/upload/'+file.name,'wb+') as destination:
                     for chunck in file.chunks():
                          destination.write(chunck)
                print(form.cleaned_data)
                img = file.name
                return render(request,'django_form.html',{'form':form,'img':img})
        else:
             form = django_form.loginForm()
             return render(request,"django_form.html",{'form':form})