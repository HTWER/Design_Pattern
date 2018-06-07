#include "IPersonBean.h"
#include "OwnerProxy.h"
#include "NonOwnerProxy.h"

IPersonBean* IPersonBean::Create(string type, IPersonBean* realPersonBean)
{
	if (type == "Owner")
	{
		OwnerProxy* ownerProxy = new OwnerProxy(realPersonBean);
		return ownerProxy;
	}
	else if (type == "NonOwner")
	{
		NonOwnerProxy* nonOwnerProxy = new NonOwnerProxy(realPersonBean);
		return nonOwnerProxy;
	}

	return NULL;
}