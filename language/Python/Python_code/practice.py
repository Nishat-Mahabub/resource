# s1= set()
# print(type(s1))
# s1.add(4)
# s1.add(3)
# s1.add(3)
# s1.add(1)
# print(s1)

# s2=set()
# s2.add(4)
# s2.add(6)
# s2.add(7)
# s2.add(7)
# print(s2)

# # s= s1.union(s2)
# s=s1.intersection(s2)
# print(s)

# a = int(input())
# b = int(input())
# if a>b:
#     print(a,"is greater")
# else: 
#     print(b,"is greater")

# list_1=[1,2,3,4,5]
# l=[["man",1],["pan",1],["jan",3]]
# d1= dict(l)
# for name in d1.items():
#     print(name,end=" ")
# print("\nfinished")

# if a not in list_1:
#     print(a,"is not in the list")

# def function(a,b,c):
#     '''This is a function which is return average of three number'''
#     return (a+b+c)**3

# print(function.__doc__)
# print(function(11,12,23))




# t_file = open("text.txt")
# content = t_file.read()
# print(content)
# t_file.close()

# f = open("max.txt","w")
# f.write("This file is newly created")
# f.close()

# for x in range(500,1001):
#     print(x,end=" ")
# dict_1= OrderedDict()
# dict_1 = {'Nishat':190149,'Masusm':190101,'Jahid':190153}

# del dict_1['Jahid']

# for x,y in dict_1.items():
#     print(x,":",y,)
# print("\n________")
# for  x in dict_1.keys():
#     print(x,end=" ")
# print("\n________")
# for y in dict_1.values():
#     print(y,end=" \n")
# print(len(dict_1))

# dict_2 ={'Nishat':[3.42,3.53,3.71,3.56],'Nishat\'s friend':["Jahid","Dr.Mobas","Noloy"] }

# for x,y in dict_2.items():
#     print(x,":")
#     for value in y:
#         print(value,end=" ")

age = int(input("What's your age ? "))

if age<25:
    print("Not adult")
elif age>=25 and age<=40:
    print("mature")
else :
    print("Old")