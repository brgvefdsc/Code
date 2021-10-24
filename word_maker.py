import random


rand_num1 = random.randint(97, 122)
rand_num2 = random.randint(97, 122)
rand_num3 = random.randint(97, 122)
rand_num4 = random.randint(97, 122)

wanted_chara1 = 'm'
wanted_chara2 = 'a'
wanted_chara3 = 't'
wanted_chara4 = 't'

trys1 = 0
trys2 = 0
trys3 = 0
trys4 = 0


rand_numbers = [rand_num1, rand_num2, rand_num3, rand_num4]
rand_total = rand_num1 + rand_num2 + rand_num3 + rand_num4

while rand_num1 !=  ord(wanted_chara1) :
    rand_num1 = random.randint(97, 122)
    trys1 = trys1 + 1
    print(chr(rand_num1))

while rand_num2 !=  ord(wanted_chara2) :
    rand_num2 = random.randint(97, 122)
    print(chr(rand_num2))
    trys2 = trys2 + 1
while rand_num3 !=  ord(wanted_chara3) :
    rand_num3 = random.randint(97, 122)
    trys3 = trys3 + 1
    print(chr(rand_num3))
while rand_num4 !=  ord(wanted_chara4) :
    rand_num4 = random.randint(97, 122)
    trys4 = trys4 + 1
    print(chr(rand_num4))


print("We found it!!!!",chr(rand_num1), chr(rand_num2), chr(rand_num3), chr(rand_num4), )

print("\nIn total it took ", trys1, " trys to find", "<",wanted_chara1,">" ", ", trys2, " trys to find", "<", wanted_chara2, ">", ", ", trys3, " trys to find", "<",wanted_chara3,">",", ", trys4, " trys to find", "<", wanted_chara4, ">")
