/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 08:54:39 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/17 13:17:26 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _maxAmt(n)
{
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span & Span::operator=(const Span &other)
{
	this->_maxAmt = other._maxAmt;
	this->_span.clear();
	for (unsigned int i = 0; i < other._maxAmt; i++)
			this->_span.push_back(other._span[i]);
	return (*this);
}

Span::~Span(void)
{
}

void Span::addNumber(int num)
{
	if (this->_span.size() == this->_maxAmt)
		throw OutOfRangeException();
	this->_span.push_back(num);
}

unsigned int Span::getShortLongSpan(MAX_MIN span) const
{
	if(this->_span.size() <= 1)
		throw std::range_error("Span:: not enough elements for a comparison");
	
	int minSpan;
	int maxSpan;
	int currDiff;
	maxSpan = minSpan = abs(this->_span.at(0) - this->_span.at(1));
	
	for (unsigned int i = 0; i < this->_maxAmt; i++)
	{
		for(unsigned int j = i + 1; j < this->_maxAmt; j++)
		{
			currDiff = abs(_span[i] - _span[j]);
			if (currDiff < minSpan)
				minSpan = currDiff;
			if (currDiff > maxSpan)
				maxSpan = currDiff;
		}
	}

	switch (span)
	{
	case MIN_SPAN:
		return (minSpan);
		break;
	
	case MAX_SPAN:
		return (maxSpan);
		break;
	}
	return(0);
}

unsigned int Span::shortestSpan(void) const
{
	return (getShortLongSpan(MIN_SPAN));
}

unsigned int Span::longestSpan(void) const
{
	return (getShortLongSpan(MAX_SPAN));
}

void Span::addMultipleNUmbers(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	while(start < end)
	{
		if (this->_span.size() == this->_maxAmt)
				throw Span::OutOfRangeException();
		this->_span.push_back(*start);
		start++;
	}
}

std::vector<int> Span::getSpan(void) const
{
	return(this->_span);
}

const char* Span::OutOfRangeException::what(void) const throw()
{
	return ("Span: no room for new elements.");
}


