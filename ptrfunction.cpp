/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptrfunction.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:39:41 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/08/06 01:42:34 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <string>
#include <iomanip>
#include <typeinfo>


class X
{
private:
	void debug(void);
public:
	typedef void (X::*ptrfunction)(void);
	void get_k(std::string (&test)[4], ptrfunction  (&p)[1]);
	void complain( std::string level );
	X();
	~X();
};
void X::debug()
{
	std::cout << "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger.\
I really do!" << std::endl;
}
void X::get_k(std::string (&test)[4], ptrfunction (&p)[1])
{
	p = {&X::debug};
	std::string table[] = {"test","tab","dd","ddd"};
	for(int i = 0; i < 4 ; i++)
		test[i] = table[i];
}

X::X(/* args */)
{
	// this->k = 78;
}

X::~X()
{
	//this->a = 10;
}


void add()
{
	std::cout << "Hello this function hello" << std::endl;
}

int main()
{
	X xobj;
	void (*funcPtr)(void) = add;
	//funcPtr();
	std::string table[4] = {};
	X::ptrfunction p[1];
	xobj.get_k(table,p);
	(xobj.*p[0])();
	//ptrnumber p = &X::b;
	std::cout << table[0] << std::endl;
	//void (X::*ptrfunction)(void) = &X::debug;
	//(xobj.*ptrfunction)();
	//std::cout << (xobj.*ptrfunction)()<< std::endl;
}
// #include <iostream>

// class X {
// private:
//     void debug();

// public:
// 	void callDebug();

// };

//  void X::callDebug() {
//         void (X::*ptrfunction)() = &X::debug;
//         (this->*ptrfunction)();
//     }
// void X::debug()
// {
// {
//         std::cout << "Debug function" << std::endl;
// }
// }
// int main() {
//     X instance;
//     instance.callDebug();

//     return 0;
// }

