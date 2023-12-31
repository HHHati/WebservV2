/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:32:17 by bade-lee          #+#    #+#             */
/*   Updated: 2023/08/15 12:40:10 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

#define NONE		"\033[m"
#define PURPLE		"\033[0;35m"
#define BLUE		"\033[0;34m"
#define YELLOW		"\033[0;33m"
#define GREEN		"\033[0;32m"
#define RED			"\033[0;31m"
#define GREY		"\033[0;30m"
#define PURPLE_B	"\033[1;35m"
#define BLUE_B		"\033[1;34m"
#define YELLOW_B	"\033[1;33m"
#define GREEN_B		"\033[1;32m"
#define RED_B		"\033[1;31m"
#define GREY_B		"\033[1;30m"

#include <iostream>
#include <unistd.h>
#include <string.h>
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <stdarg.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string>
#include <fcntl.h>
#include <fstream>
#include <sys/event.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 4096

std::vector<std::string> splitLine(const std::string& line, const std::string& sep);
bool				charInStr(const char& c, const std::string& str);
long				convertToByte(std::string& value);
std::string			get_first_line(const std::string& str);
bool 				file_exists(const std::string& fileName);
std::vector<char> 	readBinaryFile(const std::string& fileName);
bool 				is_in_vector(const std::vector<std::string>& vec, const std::string& str);
size_t 				find_in_str(const std::string& location, const std::string& req_path);
std::vector<char> 	str_to_vector(std::string str);
std::string 		getHttpRequestBody(std::string httpRequest);
std::string 		getHttpRequestWithoutBody(const std::string& httpRequest);

#endif
