/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytoumi <ytoumi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 20:02:17 by ytoumi            #+#    #+#             */
/*   Updated: 2023/10/21 21:36:29 by ytoumi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>
#include "AForm.hpp"

class AForm;

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
    void signForm(AForm *form);
    ~Bureaucrat();
    void executeForm(AForm const & form);

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