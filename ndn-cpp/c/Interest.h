/**
 * @author: Jeff Thompson
 * See COPYING for copyright and distribution information.
 */

#ifndef NDN_INTEREST_H
#define	NDN_INTEREST_H

#include "Name.h"

#ifdef	__cplusplus
extern "C" {
#endif

struct ndn_Interest {
  struct ndn_Name name;
	int maxSuffixComponents;  /**< -1 for none */
	int minSuffixComponents;  /**< -1 for none */
	unsigned char *publisherPublicKeyDigest;      /**< pointer to pre-allocated buffer.  0 for none */
  unsigned int publisherPublicKeyDigestLength; /**< length of publisherPublicKeyDigest.  0 for none */
	// TODO: implement exclude
	int childSelector;        /**< -1 for none */
	int answerOriginKind;     /**< -1 for none */
	int scope;                /**< -1 for none */
	int interestLifetime;     /**< milliseconds. -1 for none */
	unsigned char *nonce;	    /**< pointer to pre-allocated buffer.  0 for none */
  unsigned int nonceLength; /**< length of nonce.  0 for none */
};

static inline void ndn_Interest_init(struct ndn_Interest *self, struct ndn_NameComponent *nameComponents, unsigned int maxNameComponents) 
{
  ndn_Name_init(&self->name, nameComponents, maxNameComponents);
  self->maxSuffixComponents = -1;
	self->minSuffixComponents = -1;
	self->publisherPublicKeyDigest = 0;
	self->publisherPublicKeyDigestLength = 0;
	// TODO: implement exclude
	self->childSelector = -1;
	self->answerOriginKind = -1;
	self->scope = -1;
	self->interestLifetime = -1;
	self->nonce = 0;
	self->nonceLength = 0;
}

#ifdef	__cplusplus
}
#endif

#endif
