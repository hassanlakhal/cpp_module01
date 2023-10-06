// /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 08:18:51 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/04 10:03:20 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <fstream>
// #include <MyNetworkStream.h>

// void outputFoo(std::ostream& os)
// {
//   os << "Foo!";
// }

// int main()
// {
//   outputFoo(std::cout);

//   std::ofstream outputFile("foo.txt");
//   outputFoo(outputFile);

//   MyNetworkStream outputSocket;
//   outputFoo(outputSocket);
// }
// 
// #include <iostream>
// #include <fstream>


// class test3
// {
// private:
//     /* data */
// public:
//     static int dispaly(std::string str);
//     test3();
//     ~test3();
// };

// int test3::dispaly(std::string str)
// {
//     std::cout << str << std::endl;
//     return 0;
// }

// test3::test3()
// {
// }

// test3::~test3()
// {
// }


// int main() {
//     std::fstream file;  // Declare an fstream object

//     // Open the file in both input and output modes
//     file.open("example.txt", std::ios::out | std::ios::in);

//     // Check if the file was opened successfully
//     if (file.is_open()) {
//         // File opened successfully, you can read or write to it here
//         std::cout << "File opened successfully!" << std::endl;
//         // Don't forget to close the file when you're done
//         file.close();
//     } else {
//         // Failed to open the file
//         std::cout << "Failed to open the file!" << std::endl;
//     }
//     // std::cout << test3::dispaly("ddddd") << std::endl;

//     return 0;
// }

#include <string>
#include <iostream>



class Student
{
	private:
		std::string _login;
        static int i;
        static int j;

	public:
        Student(void)
        { 
            std::cout <<" addresse\t" << this << std::endl;
            j++; 
        }
		Student(std::string login) :_login(login)
		{
            j++;
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}

		~Student()
		{
            i++;
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
        Student& get(void)
        {
            return *this;
        }
        void dispaly()
        {
            std::cout <<"delete  " << this->i << std::endl;
            std::cout << "new  "<< this->j << std::endl;
        }
};

int Student::i = 0;
int Student::j = 0;

int main()
{
	// Student		bob = Student("Ssss");
    std::string a;
    int *numr = NULL;
    numr =  new int[5];
    // (*numr) = 256;
   // numr[0] = 1;
    numr[1] = 2;
    std::cout << (*numr) << std::endl;
	// Student*	jim = new Student [5];
    // Student("abcd"); // temp 
	// Do some stuff 
	// delete [] jim;
    // jim->dispaly(); // jim is destroyed
    //std::cout <<  << std::endl;
	return (0); // bob is destroyed
}