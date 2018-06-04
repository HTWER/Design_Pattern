#include "PersonBean.h"
#include "OwnerProxy.h"

PersonBean* PersonBean::Create(string type, PersonBean* realPersonBean)
{
	if (type == "Owner")
	{
		OwnerProxy* ownerProxy = new OwnerProxy(realPersonBean);
		return ownerProxy;
	}
	else if (type == "")
	{

	}

	return NULL;
}