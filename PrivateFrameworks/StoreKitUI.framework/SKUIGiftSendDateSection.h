/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGiftSendDateSection : SKUIGiftTableViewSection {
    NSString * _dateString;
    SKUIItem * _giftItem;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _headerInsets;
    SKUIGiftTableSectionHeaderView * _headerView;
    NSDate * _sendDate;
    int  _sendDateStyle;
}

@property (nonatomic, retain) SKUIItem *giftItem;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } headerInsets;
@property (nonatomic, copy) NSDate *sendDate;
@property (nonatomic) int sendDateStyle;

- (void).cxx_destruct;
- (id)_headerView;
- (id)giftItem;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })headerInsets;
- (id)headerViewForTableView:(id)arg1;
- (float)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (int)numberOfRowsInSection;
- (id)sendDate;
- (int)sendDateStyle;
- (void)setGiftItem:(id)arg1;
- (void)setHeaderInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSendDate:(id)arg1;
- (void)setSendDateStyle:(int)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end
