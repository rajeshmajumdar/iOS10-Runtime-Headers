/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest {
    id /* block */  _tokenFetchedBlock;
}

@property (nonatomic, copy) id /* block */ tokenFetchedBlock;

- (void).cxx_destruct;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setTokenFetchedBlock:(id /* block */)arg1;
- (id /* block */)tokenFetchedBlock;

@end
