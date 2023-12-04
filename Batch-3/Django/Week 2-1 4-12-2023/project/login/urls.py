from django.urls import path
from login import views
urlpatterns = [
    path('',views.loginHome,name='home'),
    path('form/',views.loginForm,name='form'),
    path('django_form/',views.djangoForm,name='django_form')
]
