/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FdStruct.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bade-lee <bade-lee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:26:21 by bade-lee          #+#    #+#             */
/*   Updated: 2023/07/08 12:35:28 by bade-lee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDSTRUCT_HPP
# define FDSTRUCT_HPP

#include "utils.hpp"

struct FdInfo {
	struct kevent events;
	bool close;
	std::string req;
	std::vector<std::string> chunks;
	bool chunked;
	size_t chunk_sent;
	size_t byte_sent; 
};

#endif