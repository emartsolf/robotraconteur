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

%template(vectorstring) std::vector<std::string>;
%template(vectorint32) std::vector<int32_t>;
%template(vectoruint32) std::vector<uint32_t>;
%template(vector_int8_t) std::vector<int8_t>;
%template(vector_uint8_t) std::vector<uint8_t>;
%template(vector_uint64_t) std::vector<uint64_t>;
%template (map_strstr) std::map<std::string,std::string>;

%shared_ptr(RobotRaconteur::RRObject);
%shared_ptr(RobotRaconteur::RRValue);
%shared_ptr(RobotRaconteur::MessageElementData)
%shared_ptr(RobotRaconteur::RRBaseArray)
%shared_ptr(RobotRaconteur::RRMultiDimArrayUntyped)

%shared_ptr(RobotRaconteur::RobotRaconteurNode)

namespace RobotRaconteur
{

std::string GetRRDataTypeString(DataTypes type);
bool IsTypeRRArray(DataTypes type);
bool IsTypeNumeric(DataTypes type);

%nodefaultctor RRObject;
class RRObject
{
    
};

%nodefaultctor RRValue;
class RRValue
{
    
};

class  MessageElementData : public RRValue
{
public:
	virtual std::string GetTypeString()=0;
	virtual DataTypes GetTypeID()=0;
};

class RRBaseArray : public MessageElementData
{
public:
	virtual std::string GetTypeString();
	virtual size_t Length()=0;
	virtual std::string RRType();
	virtual void* void_ptr()=0;
	virtual size_t ElementSize()=0;
	virtual DataTypes GetTypeID()=0;
};


boost::shared_ptr<RobotRaconteur::RRBaseArray> AllocateRRArrayByType(DataTypes type, size_t length);

class RRMultiDimArrayUntyped
{
public:
	int32_t DimCount;
	boost::shared_ptr<RRBaseArray > Dims;

	bool Complex;
	boost::shared_ptr<RRBaseArray> Real;
	boost::shared_ptr<RRBaseArray> Imag;

};
    
}

//MultiDimArray helpers

%shared_ptr(RobotRaconteur::detail::MultiDimArray_CalculateCopyIndicesIter)


%apply int32_t& OUTPUT {int32_t& indexa};
%apply int32_t& OUTPUT {int32_t& indexb};
%apply int32_t& OUTPUT {int32_t& len};

namespace RobotRaconteur
{
namespace detail
{
class MultiDimArray_CalculateCopyIndicesIter
{
public:
	virtual bool Next(int32_t& indexa, int32_t& indexb, int32_t& len) = 0;

	virtual ~MultiDimArray_CalculateCopyIndicesIter();
};

boost::shared_ptr<MultiDimArray_CalculateCopyIndicesIter> MultiDimArray_CalculateCopyIndicesBeginIter(int32_t mema_dimcount, const std::vector<int32_t>& mema_dims, const std::vector<int32_t>& mema_pos, int32_t memb_dimcount, const std::vector<int32_t>& memb_dims, const std::vector<int32_t>& memb_pos, const std::vector<int32_t>& count);
}
}