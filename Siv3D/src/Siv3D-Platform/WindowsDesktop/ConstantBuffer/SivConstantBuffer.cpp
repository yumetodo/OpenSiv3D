﻿//-----------------------------------------------
//
//	This file is part of the Siv3D Engine.
//
//	Copyright (c) 2008-2019 Ryo Suzuki
//	Copyright (c) 2016-2019 OpenSiv3D Project
//
//	Licensed under the MIT License.
//
//-----------------------------------------------

# include <Siv3D/ConstantBuffer.hpp>
# include <ConstantBuffer/D3D11/D3D11ConstantBuffer.hpp>

namespace s3d
{
	namespace detail
	{
		ConstantBufferBase::ConstantBufferBase(const size_t size)
			: m_detail(std::make_shared<ConstantBufferDetail>(size))
		{

		}

		bool ConstantBufferBase::_internal_update(const void* const data, const size_t size)
		{
			return m_detail->update(data, size);
		}

		const ConstantBufferBase::ConstantBufferDetail* ConstantBufferBase::_detail() const
		{
			return m_detail.get();
		}
	}
}
