from django import forms

class loginForm(forms.Form):
    name = forms.CharField(label="User Name")
    email = forms.EmailField(label="User Mail")
    # check = forms.BooleanField()
    # date = forms.DateField()
    # datetime = forms.DateTimeField()
    # CHOICES = [('s','Small'),('l','Large')]
    # size = forms.ChoiceField(choices=CHOICES)
    # MCHOICES = [('P','PEN'),('B','BOOK')]
    # mchoice = forms.MultipleChoiceField(choices=MCHOICES)

    file = forms.FileField()
