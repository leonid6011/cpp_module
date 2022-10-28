/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echrysta <echrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:05:07 by echrysta          #+#    #+#             */
/*   Updated: 2022/10/26 23:09:05 by echrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data
{
	public:
		Data(int nbrInput);
		Data(Data &copyObject);
		~Data();
		Data &operator=(Data &copyObject);

		int nbr;
		int getData() const;
};

#endif