#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface BusSuggestionsTable : UITableView <UITableViewDelegate, UITableViewDataSource>

- (void)addToRecentTable:(NSString *)busLine;

@property (nonatomic) UISearchBar *searchBar;
@property (nonatomic) NSDictionary *trackedBusLines;

@end
