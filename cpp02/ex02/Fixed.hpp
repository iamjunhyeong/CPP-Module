/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhyeong <junhyeong@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 03:09:12 by junhyeong         #+#    #+#             */
/*   Updated: 2024/11/30 14:32:36 by junhyeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_fixedPointValue;
	static const int	_fractionalBits;
	
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const int value);
	Fixed(const float value);
	Fixed &operator=(const Fixed &fixed);
	~Fixed();
	
	int toInt(void) const;
	float toFloat(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);

	// 비상수
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	// 상수 리턴
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	
	Fixed operator + (const Fixed &fixed) const;
	Fixed operator - (const Fixed &fixed) const;
	Fixed operator * (const Fixed &fixed) const;
	Fixed operator / (const Fixed &fixed) const;
	
	Fixed &operator ++ (void);
	Fixed operator ++ (int);
	Fixed &operator -- (void);
	Fixed operator -- (int);

	bool operator > (const Fixed &fixed) const;
	bool operator < (const Fixed &fixed) const;
	bool operator >= (const Fixed &fixed) const;
	bool operator <= (const Fixed &fixed) const;
	bool operator == (const Fixed &fixed) const;
	bool operator != (const Fixed &fixed) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);


#endif