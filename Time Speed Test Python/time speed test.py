import datetime
i = 0
a = 2
b = 1
c = 0
start1 = datetime.datetime.now()

while i <= 1000000:
    i = i + 1
    c = (a - b)*(a + b)

end1 = datetime.datetime.now()
diffrent1 = start1 - end1
c = 0
start2 = datetime.datetime.now()

while i != 0:
    i = i - 1
    c = a**2 - b**2

end2 = datetime.datetime.now()
diffrent2 = start2 - end2
c = 0 
start3 = datetime.datetime.now()

while i <= 1000000:
    i = i + 1
    c = (a << 1) -( b << 1)

end3 = datetime.datetime.now()
diffrent3 = start3 - end3

print ("start 1 = ", start1)
print ("end 1 = ", end1)
print ("start 2 = ", start2)
print ("end 2 = ", end2)
print ("difference 1 = ",diffrent1.microseconds)
print ("difference 2 = ",diffrent2.microseconds)
print ("difference 3 = ",diffrent3.microseconds)
print ("difference 2 - difference 1 = ", diffrent2.microseconds - diffrent1.microseconds)
print ("difference 3 - difference 2 = ", diffrent3.microseconds - diffrent2.microseconds)
