import copy

class A(object):
    pass

a = A()
a.st = [1, 2, 3]
a.nd = "sdfsd sdf sd"

b = copy.copy(a)

a.st.append(100)
a.nd = 'dfgdgdgdf'

print(b.st, b.nd)