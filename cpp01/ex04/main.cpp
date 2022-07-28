/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <ytaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:09:44 by ytaya             #+#    #+#             */
/*   Updated: 2022/07/24 23:09:45 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {
  if (argc == 4) {
    std::fstream fileIn;
    std::fstream fileOut;
    std::string filename = argv[1];
    std::string string1 = argv[2];
    std::string string2 = argv[3];
    int s1_len = string1.size();
    std::string buffer;
    std::string tmp;
    char c;
    unsigned long i_s1 = 0;

    fileIn.open(filename, std::ios::in);
    if (fileIn.is_open()) {
      fileOut.open(filename + ".replace", std::ios::out);
      if (!fileOut.is_open()) {
        std::cerr << "error while creating " << filename + ".replace"
                  << std::endl;
        return (1);
      }
      while (!fileIn.eof() && fileIn >> std::noskipws >> c)
        buffer += c;
      while ((i_s1 = buffer.find(string1,i_s1)) != buffer.npos) {
        buffer.erase(i_s1,s1_len);
        buffer.insert(i_s1,string2);
        i_s1 += s1_len;
      }
      fileOut << buffer;
      fileIn.close();
      fileOut.close();
    } else {
      std::cerr << "ops couldn't find " << filename << std::endl;
      return (1);
    }
  } else {
    std::cerr << "Note : <filename> string1 string2" << std::endl;
    return (1);
  }
  return (0);
}
