// Copyright 2011-2018 Wason Technology, LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifdef ROBOTRACONTEUR_CORE_USE_STDAFX
#include "stdafx.h"
#endif

#include "RobotRaconteur/ServiceFactory.h"
#include "RobotRaconteur/DataTypes.h"
#include "RobotRaconteur/ServiceDefinition.h"
#include <boost/algorithm/string.hpp>

namespace RobotRaconteur
{


RR_SHARED_PTR<RobotRaconteurNode> ServiceFactory::GetNode()
{
	RR_SHARED_PTR<RobotRaconteurNode> n=node.lock();
	if (!n) throw InvalidOperationException("Node has been released");
	return n;
}

void ServiceFactory::SetNode(RR_SHARED_PTR<RobotRaconteurNode> node)
{
	if (!this->node.expired()) throw InvalidOperationException("Factory already registered");
	this->node=node;
}

RR_SHARED_PTR<ServiceDefinition> ServiceFactory::ServiceDef()
{
	if (sdef == 0)
	{
		sdef = RR_MAKE_SHARED<ServiceDefinition>();
		sdef->FromString(DefString());
	}
	return sdef;
}

std::string ServiceFactory::RemovePath(const std::string &path)
{
	
	return SplitQualifiedName(path).get<1>();
}
}

