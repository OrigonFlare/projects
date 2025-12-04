"""
Lab 6 - Classes Practice
"""
from abc import ABC, abstractmethod

# ----------------------
# Section 1 . Classes
# ----------------------

# ----------------------
# Exercises
# ----------------------

def ex_1_1():
    """
    Create a class `Car` with a property `make` set to "Toyota".
    Add a method `get_make()` that returns the make of the car.
    Return the result of calling `get_make()` on an instance.
    """
    class Car:
        def __init__(self):
            self.make = "Toyota"

        def get_make(self):
            return self.make

    car = Car()
    return car.get_make()
    #raise NotImplementedError("Exercise 1.1 not implemented")


def ex_1_2():
    """
    Add properties `model` and `year` to the Car class with values "Corolla" and 2020.
    Add a method `get_info()` that returns "Toyota Corolla, 2020".
    Return the result of calling `get_info()` on an instance.
    """

    class Car:
        def __init__(self):
            self.make = "Toyota"
            self.model = "Corolla"
            self.year = 2020

        def get_info(self):
            return f"{self.make}, {self.model}, {self.year}"

    car = Car()
    return car.get_info()
    #raise NotImplementedError("Exercise 1.2 not implemented")


def ex_1_3():
    """
    Create a class `Rectangle` with properties `width` and `height`.
    Add a method `area()` that returns the area of the rectangle.
    Return the area of a rectangle with width=5 and height=10.
    """
    class Rectangle:
        def __init__(self):
            self.width = 5
            self.height = 10

        def area(self):
            return self.width * self.height
    rec = Rectangle()
    return rec.area()
    #raise NotImplementedError("Exercise 1.3 not implemented")


def ex_1_4():
    """
    Add a method `perimeter()` to Rectangle that returns the perimeter.
    Return the perimeter of a rectangle with width=5 and height=10.
    """
    class Rectangle:
        def __init__(self):
            self.width = 5
            self.height = 10

        def area(self):
            return self.width * self.height

        def perimeter(self):
            return self.width*2 + self.height*2

    rec = Rectangle()
    return rec.perimeter()
    #raise NotImplementedError("Exercise 1.4 not implemented")


def ex_1_5():
    """
    Create a class `BankAccount` with properties `owner` and `balance` (default 0).
    Add a method `deposit(amount)` that adds to balance.
    Return the balance after depositing 100.
    """
    class BankAccount:
        def __init__(self, owner):
            self.owner = owner
            self.balance = 0

        def deposit(self, amount):
            self.balance += amount
            return self.balance
    james_bank = BankAccount("james")
    return james_bank.deposit(100)
    #raise NotImplementedError("Exercise 1.5 not implemented")


def ex_1_6():
    """
    Add a method `withdraw(amount)` to BankAccount.
    It should subtract from balance if sufficient funds, otherwise do nothing.
    Return the balance after withdrawing 50 from an account with 100 balance.
    """
    class BankAccount:
        def __init__(self, owner):
            self.owner = owner
            self.balance = 0

        def deposit(self, amount):
            self.balance += amount
            return self.balance

        def withdraw(self, amount):
            if self.balance >= amount:
                self.balance -= amount
            return self.balance

    james_bank = BankAccount("james")
    james_bank.deposit(100)
    return james_bank.withdraw(50)
    #raise NotImplementedError("Exercise 1.6 not implemented")


def ex_1_7():
    """
    Create a class `Student` with properties `name` and `grades` (a list).
    Add a method `average()` that returns the average grade.
    Return the average for a student with grades [80, 90, 100].
    """
    class Student:
        def __init__(self, name):
            self.name = name
            self.grades = [80, 90, 100]

        def average(self):
            return sum(self.grades) / len(self.grades)

    jim = Student("jim")
    return jim.average()
    #raise NotImplementedError("Exercise 1.7 not implemented")


def ex_1_8():
    """
    Add a method `add_grade(grade)` to Student that appends to the grades list.
    Add grade 95 to the previous student and return the new average.
    """
    class Student:
        def __init__(self, name):
            self.name = name
            self.grades = [80, 90, 100]

        def average(self):
            return sum(self.grades) / len(self.grades)

        def add_grade(self, grade):
            self.grades.append(grade)

    jim = Student("jim")
    jim.add_grade(95)
    return jim.average()
    #raise NotImplementedError("Exercise 1.8 not implemented")


def ex_1_9():
    """
    Create a class `Dog` with properties `name` and `age`.
    Add a method `bark(times)` that returns "Woof!" repeated `times` times,
    separated by spaces, followed by the dog's name in parentheses, e.g.
    "Woof! Woof! (Bob)" if times=2.

    Return the result of calling `bark(3)` for a dog named "Bob".
    """
    class Dog:
        def __init__(self):
            self.name = "Bob"
            self.age = 8

        def bark(self, times):
            text = ""
            for i in range(times):
                text += "Woof! "
            return text + f"({self.name})"
    dog = Dog()
    return dog.bark(2)
    #raise NotImplementedError("Exercise 1.9 not implemented")


def ex_1_10():
    """
    Add a method `birthday()` to Dog that:
    - increases the age by 1
    - returns a string: "Happy birthday {name}! You are now {age} years old."

    Return the result of calling `birthday()` for a dog "Bob" who is 4 years old.
    """
    class Dog:
        def __init__(self):
            self.name = "Bob"
            self.age = 8

        def bark(self, times):
            text = ""
            for i in range(times):
                text += "Woof! "
            return text + f"({self.name})"

        def birthday(self):
            self.age += 1
            return f"Happy birthday {self.name}! You are now {self.age} years old."

    dog = Dog()
    return dog.birthday()
    #raise NotImplementedError("Exercise 1.10 not implemented")


# ----------------------
# Helper runner for testing
# ----------------------

def _run_and_print(fn, label):
    try:
        result = fn()
        print(f"{label}: {result}")
    except NotImplementedError:
        print(f"{label}: (not implemented)")


def main():
    print("Running Lab 6 - Classes exercises...\n")
    for i in range(1, 11):
        _run_and_print(globals()[f"ex_1_{i}"], f"1.{i}")


if __name__ == "__main__":
    main()