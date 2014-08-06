#!/usr/bin/python
text= 'Hello Python!'
def reverse(text):
    if len(text) <= 1:
        return text
    return reverse(text[1:])+text[0]
print reverse(text)