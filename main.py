import random
import math

names = ["adam", "Scott", "Michael", "Andrew", "Mark", "Fernando", "Faith", "Steve", "Lee", "Amani", "Liv", "Nick A", "James", "Jake", "Brett", "Graham", "Fraser", "Jacob", "Chelsea", "Phil", "George", "Charley", "Emma", "Steph"]
items_per_partition = 7
names_shuffled = random.sample(names, len(names)) # generates a shuffled copy of all names
print(names_shuffled, len(names_shuffled))
parts = [[names_shuffled.pop() for i in range(0, min(len(names_shuffled), items_per_partition))] for x in range(math.ceil(len(names)/items_per_partition))]

for i in range(len(parts)):
    print("Gruppe: ", parts[i])

