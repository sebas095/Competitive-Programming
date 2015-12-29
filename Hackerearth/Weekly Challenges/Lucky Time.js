// https://www.hackerearth.com/problem/algorithm/lucky-time/?utm_campaign=user-activity-email&amp;utm_medium=email&amp;utm_source=user-recommend-problem&amp;utm_campaign=mailers&amp;utm_source=email&amp;utm_medium=sendgriddescription/

importPackage(java.io);
importPackage(java.lang);

var br = new BufferedReader(new InputStreamReader(System['in']));

function luckyTime(clock) {
  this.time = clock.split(":").map(Number);
}

luckyTime.prototype = {
  lucky: function(time) {
    var num = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0];

    for (var i = 0; i < 3; i++) {
      num[Math.floor(time[i] / 10)] += 1;
      num[time[i] % 10] += 1;
    }

    for (var i = 0; i<10; i++) {
      if (num[i] > 1)
        return false;
    }

    return true;
  },
  solve: function() {
    ans = "";
    while (!this.lucky(this.time)) {
      this.time[2] += 1;
      if (this.time[2] == 60) {
        this.time[2] = 0;
        this.time[1] += 1;

        if (this.time[1] == 60) {
          this.time[1] = 0;
          this.time[0] += 1;

          if (this.time[0] == 24) {
            this.time[0] = 0;
          }
        }
      }
    }

    for (var i = 0; i < 3; i++) {
      ans += (Math.floor(this.time[i] / 10)).toString() + (this.time[i] % 10).toString();
      if (i < 2)
        ans += ":";
    }

    print(ans);
  }
}

function main() {
  var t = Number(br.readLine());
  while (t--) {
    var clock = br.readLine();
    luck = new luckyTime(clock);
    luck.solve();
  }
}

main();
