/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUStorePageDataProvider : ISDataProvider {
    SUClientInterface * _clientInterface;
    int  _outputType;
    ISPropertyListProvider * _propertyListDataProvider;
}

@property (retain) SUClientInterface *clientInterface;
@property int outputType;
@property (copy) ISPropertyListProvider *propertyListDataProvider;

- (void)_loadPersonalizedStoreOffersForPage:(id)arg1;
- (id)clientInterface;
- (void)dealloc;
- (int)outputType;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (id)propertyListDataProvider;
- (void)setClientInterface:(id)arg1;
- (void)setOutputType:(int)arg1;
- (void)setPropertyListDataProvider:(id)arg1;

@end
