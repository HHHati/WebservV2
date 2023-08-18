/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:40:47 by bade-lee          #+#    #+#             */
/*   Updated: 2023/08/18 11:53:58 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Webserv.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Bad file." << std::endl;
		return (1);
	}
	Config	config(argv[1]);
	try {config.check_content(); }
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	Webserv	webserver(config);
	webserver.printInfo();
	try
	{
		webserver.createServers();
		webserver.runServers();
	}
	catch(std::runtime_error& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return (0);
}