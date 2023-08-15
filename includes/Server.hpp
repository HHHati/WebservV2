/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:12:12 by bade-lee          #+#    #+#             */
/*   Updated: 2023/08/15 11:56:05 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_HPP
# define SERVER_HPP

#include "utils.hpp"

class Server {
	public:
		Server();
		~Server() {};

		void	printConf(std::string prefix, std::string color) const;


		std::multimap<std::string, std::string>	_listen;
		std::vector<std::string>				_serverNames;
		std::map<int, std::string>				_errorPages;
		bool									_autoIndex;
		std::vector<std::string>				_index;
		std::string								_root;
		long									_maxBody;
		std::vector<std::string>				_methods;
		std::string								_redirect;
		bool									_upload;
		std::string								_uploadPath;
		std::vector<std::string>				_cgiExt;
		std::string								_cgiPath;
		std::map<std::string, Server>			_locations;
};

#endif