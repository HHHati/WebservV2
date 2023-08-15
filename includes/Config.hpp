/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Config.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:10:51 by bade-lee          #+#    #+#             */
/*   Updated: 2023/08/15 12:02:57 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIG_HPP
# define CONFIG_HPP

#include "Server.hpp"

class Config {
	public:
		Config(std::string path);
		~Config() {};

		void	printInfo(void);
		void	print_listens(Server server);
		void	print_errors(Server server);
		void	print_locations(Server server);
		void	print_methods_location(std::vector<std::string> method);
		void	print_errors_location(std::map<int, std::string> errors);

		void	check_ports() const;

		std::vector<Server>	_servConf;
		std::ifstream		_file;
};

#endif