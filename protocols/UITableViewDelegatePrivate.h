/* Generated by RuntimeBrowser.
 */

@protocol UITableViewDelegatePrivate <UITableViewDelegate, UITableViewFocusDelegateLegacy>

@required

- (float)marginForTableView:(UITableView *)arg1;
- (void)tableView:(UITableView *)arg1 didUpdateTextFieldForRowAtIndexPath:(NSIndexPath *)arg2 withValue:(NSString *)arg3;
- (NSDictionary *)tableView:(UITableView *)arg1 heightForRowsInSection:(int)arg2;
- (struct CGPoint { float x1; float x2; })tableView:(UITableView *)arg1 newContentOffsetAfterUpdate:(struct CGPoint { float x1; float x2; })arg2 context:(id)arg3;
- (int)tableView:(UITableView *)arg1 titleAlignmentForFooterInSection:(int)arg2;
- (int)tableView:(UITableView *)arg1 titleAlignmentForHeaderInSection:(int)arg2;
- (BOOL)tableView:(UITableView *)arg1 wantsHeaderForSection:(int)arg2;
- (float)tableViewSpacingForExtraSeparators:(UITableView *)arg1;

@optional

- (float)heightForFooterInTableView:(UITableView *)arg1;
- (float)heightForHeaderInTableView:(UITableView *)arg1;
- (UIColor *)tableView:(UITableView *)arg1 backgroundColorForDeleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (UIColor *)tableView:(UITableView *)arg1 backgroundColorForSwipeAccessoryButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tableView:(UITableView *)arg1 calloutTargetRectForCell:(UITableViewCell *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (_UITableViewCellActionButton *)tableView:(UITableView *)arg1 deleteConfirmationButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didCancelReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didEndReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 didEndSwipingRowAtIndexPath:(NSIndexPath *)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tableView:(UITableView *)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)tableView:(UITableView *)arg1 maxTitleWidthForFooterInSection:(int)arg2;
- (float)tableView:(UITableView *)arg1 maxTitleWidthForHeaderInSection:(int)arg2;
- (BOOL)tableView:(UITableView *)arg1 shouldDrawTopSeparatorForSection:(int)arg2;
- (_UITableViewCellActionButton *)tableView:(UITableView *)arg1 swipeAccessoryButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(NSIndexPath *)arg2;
- (NSString *)tableView:(UITableView *)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 willBeginReorderingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg1 willBeginSwipingRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableViewDidFinishReload:(UITableView *)arg1;
- (UIView *)viewForFooterInTableView:(UITableView *)arg1;
- (UIView *)viewForHeaderInTableView:(UITableView *)arg1;

@end
