/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Calculate.framework/Calculate
 */

@interface CurrencyCache : NSObject <NSXMLParserDelegate> {
    NSDictionary * _currencyData;
    NSString * _currentCurrency;
    NSNumber * _currentRate;
    NSMutableString * _currentString;
    NSDate * _lastRefreshDate;
    NSMutableDictionary * _mutableCurrencyCache;
    unsigned long  _uuid;
}

@property (nonatomic, retain) NSDictionary *currencyData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSDate *lastRefreshDate;
@property (readonly) Class superclass;
@property (readonly) unsigned long uuid;

+ (id)shared;

- (void)_loadPersistedCurrencyCache;
- (void)_persistCurrencyCache;
- (id)currencyData;
- (void)dealloc;
- (id)init;
- (id)lastRefreshDate;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (BOOL)refresh;
- (BOOL)refreshWithTimeOut:(float)arg1;
- (void)setCurrencyData:(id)arg1;
- (void)setLastRefreshDate:(id)arg1;
- (unsigned long)uuid;

@end
