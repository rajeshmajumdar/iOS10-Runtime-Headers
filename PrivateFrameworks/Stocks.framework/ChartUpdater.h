/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface ChartUpdater : YQLRequest {
    StockChartData * _currentChartData;
    <ChartUpdaterDelegate> * _delegate;
    int  _interval;
    Stock * _stock;
}

@property (nonatomic) <ChartUpdaterDelegate> *delegate;

+ (id)_rangeStringForInterval:(int)arg1;

- (void).cxx_destruct;
- (id)aggregateDictionaryDomain;
- (void)cancel;
- (id)delegate;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (void)parseData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)updateChartForStock:(id)arg1 interval:(int)arg2;

@end
