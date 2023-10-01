/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:50:36 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/01 16:43:54 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<string>
// #include<iostream>
// class Student
// {
// 	private:
// 		std::string _login;
// 	public:
// 		Student() : _login(" Default")
// 		{
// 			std::cout << "Student" << this->_login << " is born " << std::endl;
// 		}
// 		~Student()
// 		{
// 			std::cout << "Student" << this->_login << " died " << std::endl;

// 		}
// };
// int main()
// {
// 	// Student bob = Student(" Bfubar");
// 	// Student *jim = new Student(" Jfubar");

// 	// int x;
// 	// int *ptr = &x;

// 	int a = 100;
// 	int &p = a;
// 	//p = a;
// 	//std::cout << p << std::endl;
// 	//std::cout << a << std::endl;
// 	//p++;
// 	std::cout << "a: " << a << std::endl;
// 	// int *ptr1 = (int *)malloc(sizeof(int));
// 	// int  *ptr2 = new int(5);
// 	// int *ptr3 = NULL;
// 	// //delete ptr;
// 	// std::cout << "ptr2 => " << *ptr2 << "\n";
// 	// std::cout << "ptr1 => " << *ptr1 << "\n";
// 	// delete ptr1;
// 	// delete ptr2;
// 	// delete ptr3;
// 	// //getchar();


// 	// Student *students = new Student[4];

// 	// int *p = new(std::nothrow) int;
// 	// delete p;
// 	// if(!p){
// 	// 	std::cout << "Memory allocation flailed\n";
// 	// }
// 	// delete [] students;
// 	//delete jim;
// 	return  (0);
// }

#include <iostream>

class MyClass {
public:
    // Parameterized constructor
    MyClass(int value) : data(value) {
        std::cout << "Creating an object with value: " << value << std::endl;
    }

    void display() const {
        std::cout << "Data: " << data << std::endl;
    }

private:
    int data;
};

int main() {
    // int N = 5; // Number of objects to allocate

    // // Step 1: Allocate an array of N MyClass objects using the array form of new
    // MyClass* myObjects = new MyClass[N];

    // // Step 2: Optionally, initialize each object using constructor arguments
    // for (int i = 0; i < N; ++i) {
    //     myObjects[i] = MyClass(i * 10); // Example: setting data to i * 10
    // }

    // // Use the allocated array of MyClass objects
    // for (int i = 0; i < N; ++i) {
    //     myObjects[i].display();
    // }

    // // Step 3: Don't forget to delete the allocated array when you're done
    // delete[] myObjects;
    int q = 8;
    int k = 10;
    int *p = NULL;
    int& test1 = *p;
    test1 = 1;
    // int &test = q;
    // int &test = k;
    std::cout << test1 << std::endl;
    return 0;
}

