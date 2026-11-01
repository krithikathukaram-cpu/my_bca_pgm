import numpy as bittu

a=bittu.array([1,2,3,4])
#1D:[1 2 3 4]

b=bittu.array([[1,2,3],
               [4,5,6]])
#2D: 2rows x 3columns

c=bittu.array([1,2,3], dtype=float)
#[1.2.3]

x=bittu.array([1,2,5,3])
#[1.2.5.3] all float64

d=bittu.array([[1,2],[3,4]])
e=bittu.zeros((2,3))
f=bittu.ones(4)
g=bittu.eye(3)
h=bittu.arange(0,10,2)
i=bittu.linspace(0,1,5)

print(a,b,c,x,d,e,f,g,h,i)