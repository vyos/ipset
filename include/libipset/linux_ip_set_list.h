#ifndef __IP_SET_LIST_H
#define __IP_SET_LIST_H

/* List type specific error codes */
enum {
	IPSET_ERR_NAME = IPSET_ERR_TYPE_SPECIFIC,
	IPSET_ERR_LOOP,
	IPSET_ERR_BEFORE,
	IPSET_ERR_NAMEREF,
	IPSET_ERR_LIST_FULL,
	IPSET_ERR_REF_EXIST,
};

#endif /* __IP_SET_LIST_H */