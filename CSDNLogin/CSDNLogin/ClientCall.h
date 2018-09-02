#pragma once
#include <OAIdl.h>
class ClientCall :
	public IDispatch
{
public:
	ClientCall();
	~ClientCall();

	HRESULT _stdcall GetIDsOfNames(
		REFIID riid,
		OLECHAR FAR* FAR* rgszNames,
		unsigned int cNames,
		LCID lcid,
		DISPID FAR* rgDispId
		)
	{
		if (lstrcmp(rgszNames[0], L"CppCall") == 0)
		{
			//��ҳ����window.external.CppCallʱ����������������ȡCppCall��ID
			*rgDispId = 100;
		}
		return S_OK;
	}
	HRESULT _stdcall Invoke(
		DISPID dispIdMember,
		REFIID riid,
		LCID lcid,
		WORD wFlags,
		DISPPARAMS* pDispParams,
		VARIANT* pVarResult,
		EXCEPINFO* pExcepInfo,
		unsigned int* puArgErr
		)
	{
		if (dispIdMember == 100)
		{
			//��ҳ����CppCallʱ������ݻ�ȡ����ID����Invoke����
			//CppCall(pDispParams->rgvarg[0].intVal);
		}
		return S_OK;
	}

};

