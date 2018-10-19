/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 17:05:17 by amedvedi          #+#    #+#             */
/*   Updated: 2018/10/05 17:05:19 by amedvedi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {
	ClapTrap a("Annie");
	FragTrap b("Bobbie");
	ScavTrap c("Carmen");
	NinjaTrap d("David");
	SuperTrap robot("Chris");
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.rangeAttack("human");
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.meleeAttack("another robot");
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.takeDamage(30);
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.takeDamage(50);
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.takeDamage(30);
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.beRepaired(80);
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.beRepaired(30);
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.vaulthunter_dot_exe(a.getName());
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.vaulthunter_dot_exe(b.getName());
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.vaulthunter_dot_exe(c.getName());
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.ninjaShoebox(a);
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.ninjaShoebox(b);
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.ninjaShoebox(c);
	std::cout << "* ---------------------------------------------------------------------------------------------- *" << std::endl << std::endl;
	robot.ninjaShoebox(d);
}