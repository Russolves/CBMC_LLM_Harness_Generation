void HTTPClient_ReadHeader_harness() {
    HTTPResponse_t *pResponse = (HTTPResponse_t *)nondet_uint();
    const char *pField = (const char *)nondet_uint();
    size_t fieldLen = nondet_uint();
    const char **pValueLoc = (const char **)nondet_uint();
    size_t *pValueLen = (size_t *)nondet_uint();

    __CPROVER_assume(pResponse != NULL);
    __CPROVER_assume(pResponse->pBuffer != NULL);
    __CPROVER_assume(pResponse->bufferLen > 0);
    __CPROVER_assume(pField != NULL);
    __CPROVER_assume(fieldLen > 0);
    __CPROVER_assume(pValueLoc != NULL);
    __CPROVER_assume(pValueLen != NULL);

    HTTPClient_ReadHeader(pResponse, pField, fieldLen, pValueLoc, pValueLen);
}
