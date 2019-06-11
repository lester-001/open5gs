#ifndef __MME_PATH_H__
#define __MME_PATH_H__

#include "mme-context.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

int mme_send_delete_session_or_detach(mme_ue_t *mme_ue);
int mme_send_delete_session_or_ue_context_release(
        mme_ue_t *mme_ue, enb_ue_t *enb_ue);
int mme_send_release_access_bearer_or_ue_context_release(
        mme_ue_t *mme_ue, enb_ue_t *enb_ue);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __MME_PATH_H__ */