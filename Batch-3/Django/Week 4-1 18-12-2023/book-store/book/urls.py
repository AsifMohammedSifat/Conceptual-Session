from django.urls import path
# from book.views import home, store_book, show_books, edit_book,delete_book
from . import views
from django.views.generic import TemplateView
urlpatterns = [
    # path('', views.home),
    # path('', TemplateView.as_view(template_name='home.html'),{'name':'Asif','roll':'50'}),
    # path('', views.HomeTemplateView.as_view()),
    path('<int:salary>/', views.HomeTemplateView.as_view()),

    # path('store_new_book/', views.store_book, name='storebook'),
    path('store_new_book/', views.StoreBookView.as_view(), name='storebook'),

    # path('show_books/', views.show_books, name='show_books'),
    path('show_books/', views.ShowBooksView.as_view(), name='show_books'),

    # path('book_details/<int:id>/', views.detail_books, name='book_details'),
    path('book_details/<int:id>/', views.BookDetailsView.as_view(), name='book_details'),

    # path('edit_book/<int:id>', views.edit_book, name='edit_book'),
    path('edit_book/<int:pk>', views.BookUpdateView.as_view(), name='edit_book'),

    # path('delete_book/<int:id>', views.delete_book, name='delete_book'),
    path('delete_book/<int:id>', views.DeleteBookView.as_view(), name='delete_book'),
]
# urlpatterns = [
#     # path('', home),
#     # path('', views.TemplateView.as_view(template_name='home.html')),
#     path('<int:roll>/', views.MyTemplateView.as_view(), {'author':'rahim'},name='homepage'),
#     # path('store_new_book/', views.store_book, name='storebook'),
#     path('store_new_book/', views.BookFormView.as_view(), name='storebook'),
#     # path('show_books/', views.show_books, name='show_books'),
#     path('show_books/', views.BookListView.as_view(), name='show_books'),
#     path('book_details/<int:id>', views.BookDetailsView.as_view(), name='book_details'),
#     # path('edit_book/<int:id>', views.edit_book, name='edit_book'),
#     path('edit_book/<int:pk>', views.BookUpdateView.as_view(), name='edit_book'),
#     # path('delete_book/<int:id>', views.delete_book, name='delete_book'),
#     path('delete_book/<int:pk>', views.DeleteBookView.as_view(), name='delete_book'),
# ]
