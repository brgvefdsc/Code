# This is NO where near done but it's something. This isn't something I'm focusing but I might finish this in C++ once I've learned it 



#Greeting
print("\t \t \t \t<Hello I am Physics-Bot, How many I assit you?>\n \t \t \t       /\n \t \t \t      / \n \t \t \t     /")
print("|@|@|@|@|           |@|@|@|@|\n|@|@|@|@|   _____   |@|@|@|@|\n|@|@|@|@| /\_T_T_/\ |@|@|@|@|\n|@|@|@|@||/\ T T /\||@|@|@|@|\n ~/T~~T~||~\/~T~\/~||~T~~T\~\n  \|__|_| \(-(O)-)/ |_|__|/\n  _| _|    \\8_8//    |_ |_\n|(@)]   /~~[_____]~~\   [(@)|\n  ~    (  |       |  )    ~\n      [~` ]       [ '~]\n      |~~|         |~~|\n      |  |         |  |\n     _<\/>_       _<\/>_")
UserInput = input("    /_====_\     /_====_\ \nerik@erik-IdeaPad-ScienceMode:~$ ")
#Greetings end

#Convertors cause I am stupid american
def MilesToKilometers(Miles):
    Kilometers = Miles * 1.609344
    print(Kilometers)
def PoundsToKilograms(Pounds):
    Kilograms = Pounds * 0.45359237
    print(Kilograms)
def MilesToMeters(Miles):
    Meters = Miles * 0.00062137119223733
def KilometersToMeters(Kilometers):
    Meters = Kilometers * 1000
Convertors = [ 'MilesToKilometers', 'milestokilometers', 'Miles to Kilometers', 'miles to kilometers', 'PoundsToKilograms',' poundstokilometers','pounds to kilometers','Pounds to Kilometers', 'MilesToMeters','milestometers','Miles to Meters','miles to meters', 'KilometersToMeters', 'Kilometers to Meters', 'kilometerstometers', 'Kilometers to Meters', 'kilometers to meters' ] 
#Convertors end

#Technical Stuff
keywords = ['Miles', 'miles', 'Kilometers', 'kilometers', 'Meters', 'meters', 'Pounds', 'pounds', 'Kilograms', 'Kilograms']
LoopStatus = 'On'
#Technical Stuff end

#Important Values
SpeedOfLightMeters = 299792458
SpeedOfLightKilometers = 299792.458
Pi = 3.14159 
#Important Values end

#Formulas
Formulas = [ MilesToKilometers ]
Formulas[0]
#Formulas end

#PhysicsBot Brains!
while LoopStatus != 'off':
    
    if UserInput == Convertors[0 or 1 or 2 or 3]:
        MilesToKilometers(float(input("Miles = ")))
            
    
    if UserInput == Convertors[4 or 5 or 6 or 7]:
        PoundsToKilograms(float(input("Pounds = ")))
            
    
    if UserInput == Convertors[7 or 8 or 9 or 10]:
        MilesToMeters(float(input("Miles = ")))
            
    
    if UserInput == Convertors[10 or 11 or 12 or 13]:
        KilometersToMeters(float(input("Kilometers =")))
            

    if UserInput == 'End' or 'end':
        LoopStatus = 'off'
    
    else:
        print('404')
