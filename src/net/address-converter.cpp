/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2013-2018 Regents of the University of California,
 *                         Arizona Board of Regents,
 *                         Colorado State University,
 *                         University Pierre & Marie Curie, Sorbonne University,
 *                         Washington University in St. Louis,
 *                         Beijing Institute of Technology,
 *                         The University of Memphis.
 *
 * This file is part of ndn-cxx library (NDN C++ library with eXperimental eXtensions).
 *
 * ndn-cxx library is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later version.
 *
 * ndn-cxx library is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
 *
 * You should have received copies of the GNU General Public License and GNU Lesser
 * General Public License along with ndn-cxx, e.g., in COPYING.md file.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * See AUTHORS.md for complete list of ndn-cxx authors and contributors.
 */

#include "address-converter.hpp"

namespace ndn {
namespace ip {

boost::asio::ip::address
addressFromString(const std::string& address, boost::system::error_code& ec)
{
  return boost::asio::ip::address::from_string(address, ec);
}

boost::asio::ip::address
addressFromString(const std::string& address)
{
  return boost::asio::ip::address::from_string(address);
}

boost::asio::ip::address_v6
addressV6FromString(const std::string& address, boost::system::error_code& ec)
{
  return boost::asio::ip::address_v6::from_string(address, ec);
}

boost::asio::ip::address_v6
addressV6FromString(const std::string& address)
{
  return boost::asio::ip::address_v6::from_string(address);
}

} // namespace ip
} // namespace ndn
