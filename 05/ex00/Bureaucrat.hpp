/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:02:17 by ytoumi            #+#    #+#             */
/*   Updated: 2023/10/21 21:10:54 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat &toCopy);
    const std::string getName() const;
    int getGrade() const;
    Bureaucrat &operator=(Bureaucrat const &_new);
    void increment();
    void decrement();
    ~Bureaucrat();

class GradeTooHighException : public std::exception{
public:
    const char* what() const throw();
};
class GradeTooLowException : public std::exception{
public:
    const char* what() const throw();
};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj);

#endif