//
//  ViewController.h
//  DynamicCellHeight
//
//  Created by Timo Josten on 08/07/15.
//  Copyright (c) 2015 mkswap.net. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *tableHeightConstraints;

@end

