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

%shared_ptr(RobotRaconteur::LocalTransport)

namespace RobotRaconteur
{

class LocalTransport : public Transport
{
public:
	LocalTransport();
	LocalTransport(boost::shared_ptr<RobotRaconteur::RobotRaconteurNode> node);
	
	virtual std::string GetUrlSchemeString() const;
	virtual void StartClientAsNodeName(const std::string& name);
	virtual void StartServerAsNodeName(const std::string& name);
	virtual void StartServerAsNodeID(const NodeID& nodeid);
	void Close();
	
	RR_PROPERTY(DisableMessage3)
	virtual bool GetDisableMessage3();
	virtual void SetDisableMessage3(bool d);

	RR_PROPERTY(DisableStringTable)
	virtual bool GetDisableStringTable();
	virtual void SetDisableStringTable(bool d);

	RR_PROPERTY(DisableAsyncMessageIO)
	virtual bool GetDisableAsyncMessageIO();
	virtual void SetDisableAsyncMessageIO(bool d);

	virtual void EnableNodeDiscoveryListening();
	virtual void DisableNodeDiscoveryListening();

};

}