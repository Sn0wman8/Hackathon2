# Hackathon2 Group 49

### Video link
Game Demo Video [CPT113 Hackathon 2 Group 49](https://www.google.com/)

## Game Description:
Welcome to RPG, a thrilling adventure where you will test your mettle as a hero in an epic quest to conquer a treacherous tower filled with monsters and claim victory at its peak.

At the start of the game, you will create your own character. Once your character is created with a base stat of 100 HP and 10 ATK, it's time to determine the bonus stats to enhance your abilities further. The bonus stats are randomly generated through a rolling system, adding an element of chance and unpredictability to your character's progression.

As you ascend the tower, you will encounter a variety of fearsome monsters, each more challenging than the last. Engage in strategic battles, utilizing your wit, skills, and a bit of luck to defeat these adversaries. But fear not, for with each victory, you gain valuable bonus stats and unlock a treasure chest found on the respective floor.

You will discover powerful weapons that can augment your combat abilities inside the treasure chests. Each weapon carries a unique bonus ATK stat, allowing you to customize your playstyle and enhance your chances of success. However, be cautious, as the tower's challenges become increasingly formidable as you near the top.

The game features a saving and loading system to aid you on your quest, allowing you to store your progress and resume your adventure at any time. Whether you continue your ascent, switch weapons, or take a break, the game offers convenient options to suit your needs.

At the tower's pinnacle, an ultimate challenge awaits you—the final boss. This formidable enemy tests your skills, pushing you to the brink of your abilities. Employ all your learned tactics, exploit your weapon's bonus ATK, and summon the courage to overcome the final obstacle.

Defeat the final boss, and bask in the glory of victory! You will be hailed as a true legend, having conquered the Tower of Legends and secured your place in history.

Prepare to embark on an unforgettable adventure where every step brings you closer to triumph. Gather your courage, sharpen your blades, and face the Tower of Legends head-on. The fate of the kingdom and your own legacy await your heroic ascent!


## Game Features
Here are the exciting features of our text-based RPG game:

**Character Creation** 
- Enter your name and watch as your unique character is generated. Random health points (HP) and attack points will be assigned, making each playthrough different.

**Tower Exploration** 
- Navigate through a multi-floor tower, starting from the first floor. Each floor presents new challenges, enemies, and treasures.

**Engaging Battles** 
- Engage in turn-based battles with enemies encountered on each floor. Choose from various actions, including Normal Attacks, Gamble Strikes, and Guarding, to defeat your foes strategically.

**Dynamic Damage System** 
- Witness the outcome of your attacks and the enemy's counterattacks through a dynamic damage display. The enemy's HP will decrease as you deal damage, and vice versa.

**Rewards and Loot** 
- Enjoy the thrill of victory as defeated enemies reward you with bonus stats and valuable loot. Equip your character with acquired items to boost your attack points and increase your chances of success.

**Progression and Difficulty** 
- Journey through multiple floors, each subsequent floor featuring stronger and more challenging enemies. Experience a sense of progression as you face tougher foes and discover new strategies.

**Save System** 
- Use the save feature between floors to preserve your progress and resume your adventure later. No need to worry about losing your hard-earned progress!

**Epic Boss Battles** 
- Test your skills and strategy against powerful bosses on the third floor. Defeating them will mark the culmination of your adventure and determine your victory.

**Permadeath Challenge** 
- Please be careful about your character's health points. If your HP reaches zero, it's game over! Exercise caution, plan your actions carefully, and stay alive throughout your difficult journey.


## How-to-play
Welcome to our captivating text-based RPG game! Prepare for an engaging adventure with these simple instructions:
1.	Start by entering your name to create your heroic character. Your character will be randomly assigned health points (HP) and attack points.
2.	You will find yourself on the tower's first floor, facing various enemies. The User Interface will provide information about these foes.
3.	During battles, you'll be presented with three options on each turn:
    - Choose "Normal Attack" to perform a regular attack on the enemy. 
    - Opt for "Gamble Strike" to take a risk and potentially deal more damage. 
    - Select "Guard" to defend yourself and reduce damage from the enemy's next attack.
4.	After selecting your action, the game will process your turn. If the enemy survives, it will retaliate and attack you.
5.	Keep a close eye on the damage dealt and received. The enemy's HP will decrease accordingly.
6.	Defeat an enemy by reducing its HP to zero. Celebrate your victory and receive bonus stats and valuable loot.
7.	Progress to the next floor to face even stronger opponents. You can save your game between floors for a more immersive experience.
8.	Before ascending each floor, equip the loot you obtained to increase your attack points and enhance your damage.
9.	The game consists of three floors, culminating in an epic boss battle on the third floor. Defeat the boss to win the game.
10.	Remember, if your HP reaches zero, your journey will come to an end. Be strategic and mindful of your health.
    
Prepare for this thrilling RPG adventure, where your decisions and skills will shape your destiny. Enjoy the game, and may victory be yours!


## Object-Oriented Concept
Our code has implemented several object-oriented concepts that help organize and structure the program effectively.

**Encapsulation**
- Encapsulation is an important concept in our code. We have used classes to encapsulate related data and behaviors into a single entity. For example, the Tower class encapsulates the properties and methods related to a tower object, while the Floor class encapsulates the properties and methods related to a floor object.
- To ensure encapsulation, we have carefully chosen the access modifiers for our class members. We have marked certain variables and methods as private to restrict direct access outside the class. For example, in our project, the playerStat() function encapsulates the logic for saving the player's stats to a file named "stat.txt". It uses private member functions getName(), gethp(), and getatk() to access the encapsulated data and write it to the file. This public function allows external code to save the player's stats.

- Thus, This concept helps to protect the internal implementation details and ensures that the class's internal state is accessed and modified only through well-defined public methods.
  
**Linked List**
- Another object-oriented concept in our code is implementing a linked list. We have utilized a linked list data structure to maintain a dynamic collection of elements, such as the floors in the tower.
- In our code, we have implemented a linked list data structure in my code to manage a dynamic collection of elements, specifically the floors in a tower. Utilizing a linked list, I have efficiently managed the tower's floors without the constraints of a fixed-size array. This flexibility allows for the addition or removal of floors during runtime, enhancing the overall functionality of the tower.
- Moving beyond the linked list implementation, I have also included other classes in my code, such as Weapon and Inventory, which contribute to the overall functionality of the game. These classes encapsulate their respective data and provide methods for adding, equipping, and managing weapons within the player's inventory.
- The linked list implementation follows the principles of object-oriented programming by encapsulating the list structure and providing methods to manipulate the list's contents. It also facilitates code reuse and modularity by separating the linked list functionality from the rest of the program.

**Composition**
- Composition is a concept that involves combining objects of different classes to create more complex objects. It allows us to create relationships between classes where one class contains an instance of another class as a member variable. This concept enables us to build complex objects by assembling simpler objects.
- In our code, we utilize composition by combining objects of different classes to create a complex gameplay system. The Gameplay class contains member variables of various types, such as Player, Tower, Inventory, and Weapon. We establish the composition and construct a comprehensive object by including instances of these classes as member variables.
- Composition promotes code reusability, modular design, and flexibility. It allows us to create complex systems by combining smaller, independent objects.

**Polymorphic Relationships**
- Polymorphic relationships refer to the ability to use a single interface or class to represent multiple related classes. It allows us to treat objects of different classes as interchangeable, providing flexibility and extensibility.
- In our code, we utilized polymorphic relationships by designing classes that can interact with multiple types of objects through a common interface or base class. This way, we can write code that can work with different objects interchangeably as long as they adhere to the common interface or base class.
- Polymorphic relationships simplify code design, increase code flexibility, and make extending and maintaining the codebase easier.

**Overloading**
- Overloading is a concept that allows us to define multiple methods with the same name but different parameters within a class. Each method can perform a similar action but on different types of data or with different input parameters. When invoking an overloaded method, the appropriate version is determined based on the arguments passed during the method call.
- We have implemented method overloading in our code by defining multiple methods with the same name but different parameters. This concept allows us to provide flexibility and convenience in using the methods, as I can choose the version that best suits the specific context or data types involved.
- Method overloading improves code readability, eliminates the need for creating multiple method names for similar functionality, and enhances the overall flexibility of the class.


## ADTs usage
In our game, we implemented a few linked list ADTs to store several important pieces of information that acts as a core role in our game.
In our code, we utilize the ADTs in three classes:
1. Tower class
2. Inventory class
3. Weapon class
   
- The Tower class manages the floors of a tower in a game, where each floor contains information about the level, monster, and their attributes. 
The linked list structure is used to represent the floors of the tower. Each floor is represented by a node in the linked list, defined by the floor struct. The Tower class maintains two pointers, current and bottom, which point to the current floor and the tower's bottom floor, respectively.
- The Tower class provides several member functions to interact with the tower and its floors. Here's an explanation of each function:
    1.	addfloor(int lvl, string mob, int monHP, int monATK): This function adds a new floor to the tower by creating a new node and appending it to the end of the linked list.
    2.	nextfloor(): This function moves the player to the next floor by updating the current pointer to point to the next node in the linked list.
    3.	display(): This function displays the details of the current floor, including the level, monster, monster's HP, and ATK.
    4.	setmobhp(int hp): This function sets the monster's health points (HP) on the current floor.
    5.	setmobatk(int atk): This function sets the attack (ATK) of the monster on the current floor.
    6.	getmobhp(): This function retrieves the HP of the monster on the current floor.
    7.	getmobatk(): This function retrieves the monster's ATK on the current floor.
    8.	startTower(): This function sets the current pointer to the bottom floor, ensuring the game starts at the first level.
    9.	boss room (): This function checks if the current floor is the final boss room. It returns true if the existing floor is the last, indicating the player has reached the final challenge.
    10.	savefloor(): This function saves the tower's progress to a file named "tower.txt". It stores the level of the next floor in the file.
    11.	loadfloor(): This function loads the tower progress from the "tower.txt" file. It reads the level of the next floor from the file and sets the current pointer to the corresponding floor.
    12.	setfloor(int lf): This function sets the current pointer to a specific floor based on the provided level.
    13.	getfloor(): This function retrieves the level of the current floor.
        

- The Inventory class manages a player's inventory in a game, specifically for storing weapons.
The Inventory class uses a linked list structure to represent the inventory. Each weapon is represented by a node in the linked list, defined by the Inv struct. The Inventory class maintains a pointer head that points to the first weapon in the inventory and a pointer equippedWeapon that points to the currently equipped weapon.
- The Inventory class provides several member functions to interact with the inventory. Here's an explanation of each function:
    1.	addWeapon(string name, double damage): This function adds a new weapon to the inventory by creating a new node and appending it to the end of the linked list. The weapon is defined by its name and damage.
    2.	printInfo(): This function displays the information of each weapon in the inventory. It traverses the linked list and prints the name and damage of each weapon.
    3.	equipWeapon(string name): This function searches for a weapon with the given name in the inventory and sets the equippedWeapon pointer to point to that weapon. It indicates that the weapon is currently equipped.
    4.	unequipWeapon(): This function sets the equippedWeapon pointer to nullptr, indicating that no weapon is currently equipped.
    5.	throwWeapon(string name): This function removes a weapon with the given name from the inventory. It searches for the weapon in the linked list, updates the appropriate pointers, and deallocates the node's memory.
    6.	displayEquippedWeapon(): This function displays the information of the currently equipped weapon. It prints the name and damage of the weapon pointed to by the equippedWeapon pointer.
    7.	saveInv(): This function saves the inventory information to a file named "inventory.txt". It stores the name and damage of each weapon in the file and the information of the equipped weapon, if available.
    8.	loadInv(): This function loads the inventory information from the "inventory.txt" file. It reads the file and reconstructs the linked inventory list, including the equipped weapon information.
       
By implementing the Inventory class with a linked list, we can dynamically manage the player's inventory, add weapons, remove weapons, equip and unequip weapons, and store the inventory information persistently. 

- The Weapon class is responsible for adding weapons, selecting a random weapon, and retrieving the name and damage of the currently selected weapon.
- The Weapon class uses a linked list structure to store the weapons. Each weapon is represented by a node in the linked list, defined by the Wea struct. The Weapon class maintains a pointer head that points to the first weapon in the list and a pointer selectedWeapon that points to the currently selected weapon.
- Here's an explanation of the functions in the Weapon class:
    1.	Weapon(): This is the constructor of the Weapon class. It initializes the member variables, sets the pointers to null, and adds some default weapons (e.g., "Battle axe", "Dagger", "Hunter Bow") to the linked list.
    2.	~Weapon(): This is the destructor of the Weapon class. It deallocates the memory occupied by the linked list nodes. It traverses the list, starting from the head, and deletes each node.
    3.	addItem(string name, int attackNumber): This function adds a new weapon to the weapon list by creating a new node and appending it to the end of the linked list. These weapons will be further randomized to become the player's loot, and Their name and attack number define them.
    4.	getName() const: This function retrieves the name of the currently selected weapon and returns it as a string.
    5.	getDamage(): This function retrieves the damage value of the currently selected weapon and returns it as an integer.
    6.	randomWeapon(): This function selects a random weapon from the linked list. It generates a random index within the range of the number of weapons in the list. It then traverses the list to find the weapon at that index and sets the selectedWeapon pointer to point to it.
       
The Weapon class allows for dynamically managing weapons, adding new weapons, selecting a random weapon, and retrieving the name and damage of the selected weapon. The linked list structure provides an efficient way to organize and manipulate the weapons, allowing for easy traversal and selection of a random weapon.


