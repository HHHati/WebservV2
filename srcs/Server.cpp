/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Server.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:15:55 by bade-lee          #+#    #+#             */
/*   Updated: 2023/07/09 16:33:18 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Server.hpp"

Server::Server() : _listen(), _serverNames(), _errorPages(), _index(),
	_root(), _methods(), _redirect(), _uploadPath(), _cgiExt(), _cgiPath(), _locations()
{
	_autoIndex = false;
	_maxBody = -1;
	_upload = false;
}

void	Server::printConf(std::string prefix, std::string color) const
{
	std::string	upPrefix;

	upPrefix.append(prefix);
	if (_listen.size())
	{
		std::cout << color << upPrefix << "listen \t\t: " << color ;
		for (std::map<std::string, std::string>::const_iterator it = _listen.begin(); it != _listen.end(); it++)
			std::cout << it->first << ":" << it->second << " - ";
		std::cout << NONE << std::endl;
	}
	if (_serverNames.size())
	{
		std::cout << color << upPrefix << "server_name \t: " << color;
		for (size_t j = 0; j <_serverNames.size(); j++)
			std::cout << _serverNames[j] << " - ";
		std::cout << NONE << std::endl;
	}
	if (_errorPages.size())
	{
		std::cout << color << upPrefix << "error_pages \t: " << color;
		for (std::map<int, std::string>::const_iterator it = _errorPages.begin(); it != _errorPages.end(); ++it)
			std::cout << "(" << it->first << " -> " << it->second << ") - ";
		std::cout << NONE << std::endl;
	}
	if (_autoIndex)
	{
		std::cout << color << upPrefix << "autoindex \t: " << color;
		std::cout << _autoIndex << NONE << std::endl;
	}
	if (_index.size())
	{
		std::cout << color << upPrefix << "index \t\t: " << color;
		for (size_t j = 0; j < _index.size(); j++)
			std::cout << _index[j] << " - ";
		std::cout << NONE << std::endl;
	}
	if (!_root.empty())
	{
		std::cout << color << upPrefix << "root \t\t: " << color;
		std::cout << _root << NONE << std::endl;
	}
	if (_maxBody)
	{
		std::cout << color << upPrefix << "client_max_size\t: " << color;
		std::cout << _maxBody << NONE << std::endl;
	}
	if (_methods.size())
	{
		std::cout << color << upPrefix << "methods \t: " << color;
		for (size_t j = 0; j < _methods.size(); j++)
			std::cout << _methods[j] << " - ";
		std::cout << NONE << std::endl;
	}
	if (_upload)
	{
		std::cout << color << upPrefix << "upload \t\t: " << color;
		std::cout << _upload << NONE << std::endl;
	}
	if (!_uploadPath.empty())
	{
		std::cout << color << upPrefix << "upload path \t: " << color;
		std::cout << _uploadPath << NONE << std::endl;
	}
	if (_cgiExt.size())
	{
		std::cout << color << upPrefix << "CGI extentions \t: " << color;
		for (size_t j = 0; j < _cgiExt.size(); j++)
			std::cout << _cgiExt[j] << " - ";
		std::cout << NONE << std::endl;
	}
	if (!_cgiPath.empty())
	{
		std::cout << color << upPrefix << "CGI path \t: " << color;
		std::cout << _cgiPath << NONE << std::endl;
	}
	std::cout << std::endl;
}