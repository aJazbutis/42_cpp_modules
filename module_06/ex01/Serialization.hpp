/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajazbuti <ajazbuti@student.42heilbronn.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:02:57 by ajazbuti          #+#    #+#             */
/*   Updated: 2022/08/27 18:40:07 by ajazbuti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATIION_HPP
#define SERIALIZATIION_HPP

# include <cstdint>

struct	Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
