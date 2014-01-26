//
//  DataViewController.h
//  hiveApp02
//
//  Created by Morten Bøe on 1/26/14.
//  Copyright (c) 2014 Morten Bøe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DataViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end
