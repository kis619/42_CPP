/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmilchev <kmilchev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 12:56:02 by kmilchev          #+#    #+#             */
/*   Updated: 2022/06/13 02:12:01 by kmilchev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Conv.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2 || !argv)
	{
		std::cout << "The program takes EXACTLY one argument you dussel!" << std::endl;
		return(1);
	}

	Convertor me;
	me.convert(argv[1]);
	me.display();
	return (0);
}